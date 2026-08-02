# Changelog

## v1.3.0 - In Development

### Added

- Added a Qt 6 graphical interface with dedicated workspaces for COPY, LYZER, EXTRACT, DEL, HASH, STRING, MAGIC, ELFINFO, READ / SEARCH, RSA TOOLS, ENTROPY, and PCAP.
- Added a standalone packet-capture analyzer supporting classic PCAP and PCAPNG files.
- Added raw IPv4 and Ethernet capture support.
- Added Ethernet frame summaries for IPv4, ARP, IPv6, and other EtherTypes.
- Added IPv4, TCP, UDP, and ICMP protocol summaries.
- Added TCP flag, address, port, and payload statistics.
- Added Base64-like TCP payload detection and decoded previews.
- Added TCP stream reconstruction and decoded reconstruction.
- Added full packet-level TCP and protocol details.
- Added complete READ and SEARCH graphical workflows.
- Added RSA TOOLS workflows for RSA-CHECKPQ, RSA-DFROMPQ, RSA-KNOWNPQ, RSA-WIENER, and RSA-SMALL-E.
- Added structured findings and report-export workflows where supported.

### Improved

- Standardized GUI action rows, control placement, descriptions, validation, and result-clearing behavior.
- Added mode-specific GUI controls so fields appear only when applicable.
- Improved COPY verification reporting and forensic result summaries.
- Improved DEL result verification following secure deletion.
- Improved EXTRACT findings and raw-report export.
- Improved PCAP GUI summaries for Ethernet frame types.
- Improved ELFINFO, HASH, MAGIC, and RSA input validation.
- Preserved complete CLI workflows and raw output within the graphical interface.
- Added PCAP to the CLI menu and general command reference.
- Expanded PCAP help to document PCAPNG, Ethernet analysis, payload inspection, and stream reconstruction.

### Validation

- CLI build: passing.
- Functional GUI smoke tests: passing.
- Current development regression baseline: PASS 382 / FAIL 0 / SKIP 0.

## v1.2.0 - Cryptanalysis and Reliability

### Added

- Added RSA-ECM factorization with configurable curve counts and stage-one bounds.
- Added bounded RSA factorization controls.
- Expanded RSA validation and factor-verification behavior.
- Expanded regression coverage across cryptanalysis, forensic, analysis, and utility workflows.
- Added the maintained v1.2.0 user manual and release documentation.

### Improved

- Hardened CLI parsing, error handling, command consistency, and regression reliability.
- Improved forensic COPY, secure deletion, extraction, entropy, and analysis workflows.
- Improved build and sanitizer validation.

### Validation

- Stable release regression result: PASS 246 / FAIL 0 / SKIP 0.

## v1.1.0 - Framework Expansion

### Added

- Expanded command coverage and regression testing.
- Added Linux installation and uninstallation scripts.
- Added LYZER summary and full-mode aliases.

### Improved

- Improved shell dispatch, input validation, help text, documentation, and command consistency.
- Strengthened the development and release workflow.

### Validation

- Stable release regression result: PASS 92 / FAIL 0 / SKIP 0.

## v1.0.0 - Stable Foundation

### Added

- Promoted K1Wi from release candidate to its first stable public release.
- Established the unified K1Wi command-line framework and project identity.
- Added core forensic, extraction, entropy, binary-analysis, hashing, and RSA workflows.
- Added responsible-use documentation and release packaging.

### Improved

- Added lowercase LYZER mode support and regression coverage.
- Hardened CLI dispatch, terminal-width handling, PIECALC symbol listing, and regression targets.
- Improved command consistency and stable-release documentation.

### Validation

- Stable release regression result: PASS 72 / FAIL 0 / SKIP 0.

## v0.99 RC1 - K1Wi

### Added
- Added centralized version banner through `include/version.h`.
- Added `opus --version` and `opus version` output for release tracking.
- Added regression coverage for VERSION output.
- Added RSA CLI support through `opus rsa <rsa_file>`.
- Added ELF CLI support through `opus elf <binary>`.
- Added PIECALC CLI regression coverage.
- Added LYZER CLI support for full image/file forensic scans.
- Added negative CLI behavior tests.

### Improved
- Expanded regression coverage for STRING, EXTRACT, LYZER, ENTROPY, ELF, PIECALC, RSA, and VERSION.
- Improved CLI argument handling for missing inputs.
- Cleaned compiler warnings.
- Verified sanitizer build with regression suite.

### Fixed
- Fixed STRING command argument parsing.
- Fixed EXTRACT recursive dispatch.
- Fixed LYZER CLI dispatch.
- Fixed ENTROPY CLI dispatch.
- Fixed ELF CLI dispatch.
- Fixed RSA CLI dispatch.
- Fixed regression assertions using fixed-string matching.

### Status
- Clean build: passing.
- Regression suite: passing.
- Sanitizer run: passing.
