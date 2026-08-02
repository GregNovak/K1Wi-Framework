# K1Wi Framework

K1Wi is a Linux-based reverse engineering, cryptanalysis, digital forensics, network analysis, and file analysis framework. Its command-line core is written in C, with a Qt 6 graphical interface written in C++.

The project combines digital forensics, archive extraction, cryptanalysis, binary inspection, packet analysis, and reverse engineering utilities in unified command-line and graphical workflows.

## Features

K1Wi provides a collection of reverse engineering, digital forensics,
cryptanalysis, binary analysis, and file investigation tools designed for
security researchers, students, and CTF participants.

Major capabilities are grouped into the categories below.

### Forensics

* LYZER forensic file and image analysis
* STRING intelligence and decoding
* SEARCH file pattern analysis
* Entropy analysis
* Embedded file detection
* File carving
* JPEG forensic analysis
* Magic byte detection

### Network Analysis

* Classic PCAP and PCAPNG analysis
* Raw IPv4 and Ethernet capture support
* Ethernet IPv4, ARP, IPv6, and other EtherType summaries
* IPv4, TCP, UDP, and ICMP traffic summaries
* TCP flag, address, port, and payload statistics
* Base64-like TCP payload detection and decoded previews
* TCP stream reconstruction
* Full packet-level protocol details

### Extraction

* Recursive archive extraction
* Embedded file recovery
* Extraction logging

### Cryptanalysis

* Vigenère cipher analysis
* Substitution cipher solving
* RSA cryptanalysis

  * RSA-FACTOR (Fermat / Classical)
  * RSA-RHO (Pollard Rho)
  * RSA-ECM (Elliptic Curve Method)
  * RSA-WIENER
  * RSA-SMALL-E
  * RSA-KNOWNPQ
  * RSA-CHECKPQ
  * RSA-DFROMPQ
  * RSA-MINI

### Binary Analysis

* ELF inspection
* PIE base calculations
* Runtime address analysis
* Symbol analysis

  * ELFINFO
  * PIECALC
  * PIETIME

### Utility

* Integrated HELP system
* Command menu system
* MD5 and SHA-256 utilities
* Secure delete operations
* Bounded filesystem wipe controls

## Graphical Interface

The `v1.3-dev` branch adds a Qt 6 graphical interface that preserves the underlying CLI workflows while providing input validation, structured findings, consistent controls, and accessible result views.

Available GUI workspaces:

* COPY
* LYZER
* EXTRACT
* DEL
* HASH
* STRING
* MAGIC
* ELFINFO
* READ / SEARCH
* RSA TOOLS
* ENTROPY
* PCAP

## Build

Requirements:

* GCC or Clang
* GNU Make
* CMake
* Qt 6 development libraries
* libgmp-dev
* libssl-dev
* libncurses-dev
* libjpeg-dev

Install dependencies on Ubuntu or Debian:

```bash
sudo apt install build-essential cmake qt6-base-dev libgmp-dev libssl-dev libncurses-dev libjpeg-dev
```

Build the command-line application:

```bash
make
```

Perform a clean CLI build:

```bash
make clean
make
```

Run the CLI:

```bash
./bin/k1wi
```

Configure and build the graphical interface:

```bash
cmake -S gui -B gui/build
cmake --build gui/build
```

Run the GUI:

```bash
./gui/build/k1wi-gui
```

## RSA-ECM Example

K1Wi includes RSA-ECM support for elliptic-curve factorization of RSA moduli. The default settings use 20 curves with a stage-1 bound of B1=5000.

```bash
./bin/k1wi RSA-ECM testdata/rsa/rsa_ecm_small_factor.txt
./bin/k1wi RSA-ECM testdata/rsa/rsa_ecm_small_factor.txt --curves 50 --bound 10000
./bin/k1wi RSA-ECM testdata/rsa/rsa_ecm_small_factor.txt -c 50 -b 10000
./bin/k1wi RSA-ECM testdata/rsa/rsa_ecm_small_factor.txt --b1 10000
```

Options:

```text
--curves N   Number of ECM curves to try
--bound N    Stage-1 ECM bound, also known as B1
--b1 N       Alias for --bound
-c N         Alias for --curves
-b N         Alias for --bound
```

## Install on Linux

K1Wi can be built and installed locally on Linux with:

```bash
./install.sh
```

This builds the project, installs the `k1wi` binary to:

```text
/usr/local/bin/k1wi
```

and installs documentation to:

```text
/usr/local/share/doc/k1wi
```

After installation, run K1Wi from anywhere with:

```bash
k1wi
```

To uninstall:

```bash
./uninstall.sh
```

The uninstall script removes the installed binary and documentation only. It does not remove the source tree or user-created files.

## Quick Start


View available commands:

```bash
./bin/k1wi HELP
./bin/k1wi MENU
```

Analyze a string:

```bash
./bin/k1wi STRING SGVsbG8=
```

Analyze a file:

```bash
./bin/k1wi ENTROPY sample.bin
```

Inspect an ELF binary:

```bash
./bin/k1wi ELFINFO -IN ./bin/k1wi
```

Run image forensics with the default summary view:

```bash
./bin/k1wi LYZER image.jpg
```

Run full image forensics:

```bash
./bin/k1wi LYZER image.jpg --quiet
./bin/k1wi LYZER image.jpg --full
```

Analyze a packet capture:

```bash
./bin/k1wi PCAP capture.pcap
./bin/k1wi PCAP --summary capture.pcapng
./bin/k1wi PCAP --full capture.pcap
```

Launch the graphical interface:

```bash
./gui/build/k1wi-gui
```

## Testing

Run the regression suite:

```bash
./tests/run_regression.sh
```

Current `v1.3-dev` development regression baseline:

```text
PASS: 382
FAIL: 0
SKIP: 0
```

The v1.3 baseline covers the CLI, Qt 6 GUI workflows, PCAP analysis, cryptanalysis tools, file-analysis commands, validation behavior, and regression fixtures.

Validated using clean builds, functional GUI smoke tests, and full regression-suite execution.

## Safety

Some commands operate on live filesystems and user data.

WIPEFS refuses destructive mode unless explicit safety controls are supplied:

```bash
WIPEFS <path> --max-bytes <N> --yes
```

Use dry-run mode whenever possible:

```bash
WIPEFS <path> --dry-run
```

Always test destructive operations inside disposable directories before use on production systems.

## Status

Current stable public release: v1.2.0

Current development branch: `v1.3-dev`

K1Wi Framework v1.3.0 is in documentation, final validation, and release preparation. The v1.3 feature set includes the Qt 6 GUI and standalone PCAP and PCAPNG analysis workflows.

Current v1.3 development validation:

```text
PASS: 382
FAIL: 0
SKIP: 0
```

Stable release history:

- v1.0.0 passed regression testing with PASS 72 / FAIL 0 / SKIP 0.
- v1.1.0 passed regression testing with PASS 92 / FAIL 0 / SKIP 0.
- v1.2.0 passed regression testing with PASS 246 / FAIL 0 / SKIP 0.

## License

K1Wi Framework is released under the MIT License. See `LICENSE` for the full license terms and `DISCLAIMER.md` for responsible-use and liability information.

Copyright (c) 2026 Gregory B. Novak
