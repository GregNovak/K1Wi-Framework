# K1Wi Framework Roadmap

## Completed Releases

### v1.0.0 — Stable Foundation

- Established the stable K1Wi command-line framework.
- Standardized command dispatch, help, versioning, and regression coverage.
- Delivered the initial forensic, extraction, cryptanalysis, binary-analysis, and utility workflows.
- Completed the first stable public release.

### v1.1.0 — Framework Expansion

- Expanded command coverage and regression testing.
- Added Linux installation and uninstallation workflows.
- Improved LYZER modes, shell behavior, validation, and documentation.
- Strengthened the framework for continued feature development.

### v1.2.0 — Cryptanalysis and Reliability

- Added RSA-ECM and bounded RSA factorization workflows.
- Expanded cryptanalysis validation and reliability.
- Hardened forensic, extraction, entropy, hashing, and destructive-operation behavior.
- Reached a stable regression baseline of PASS 246 / FAIL 0 / SKIP 0.

## Current Development

### v1.3.0 — GUI and Network Analysis

- Deliver the Qt 6 graphical interface.
- Provide GUI workspaces for COPY, LYZER, EXTRACT, DEL, HASH, STRING, MAGIC, ELFINFO, READ / SEARCH, RSA TOOLS, ENTROPY, and PCAP.
- Preserve complete CLI workflows and raw reports within the GUI.
- Deliver standalone classic PCAP and PCAPNG analysis.
- Support raw IPv4 and Ethernet packet captures.
- Report Ethernet IPv4, ARP, IPv6, and other EtherType frame counts.
- Provide IPv4, TCP, UDP, ICMP, TCP flag, address, port, and payload summaries.
- Detect Base64-like TCP payloads and reconstruct TCP streams.
- Standardize GUI controls, validation, action rows, and result presentation.
- Complete documentation, final validation, release notes, tagging, and merge preparation.
- Current development regression baseline: PASS 382 / FAIL 0 / SKIP 0.

## Planned Priorities

### v1.4.0 — Evidence Acquisition and Release Presentation

- Add a dedicated bit-for-bit evidence-acquisition module.
- Keep evidence acquisition separate from the existing COPY workflow.
- Add acquisition manifests and post-acquisition verification.
- Add case and examiner metadata.
- Add evidence-handoff and chain-of-custody reports.
- Add JSON and CSV report exports.
- Expand GUI visual styling and color.
- Add a startup splash screen.
- Produce updated screenshots and short demonstration videos.

## Future Ideas

- Windows version of the K1Wi Framework.
- Modular command registry.
- Plugin architecture.
- Scripting and automation support.
- Automated triage workflows.
- Session and case management.
- CONVERT / NUMCONV file-based conversion modes.
- RSA-SIGN helper with direct-message and exact-byte file modes.
