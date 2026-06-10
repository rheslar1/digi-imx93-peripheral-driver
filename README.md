# Digi ConnectCore i.MX93 Peripheral Driver

Hardware peripheral driver for the Digi ConnectCore i.MX93 EVK, covering an on-chip SPI or PWM block, application layer, and test boundary.

## Portfolio Purpose

This repository is an Embedded Systems project scaffold for the Rheslar portfolio. It is designed to become a hardware-backed project with build output, validation logs, and reviewable implementation evidence.

## Stack

- i.MX93
- Digi ConnectCore
- SPI/PWM
- Device tree
- Linux driver
- Unit tests

## Quick Start

```bash
cmake -S . -B build
cmake --build build
./build/digi_imx93_peripheral_driver
python -m unittest discover -s tests
```

## Implementation Slices

- Native starter executable that exposes the project identity, stack, and validation target.
- Architecture document with control boundaries, data flow, safety assumptions, and evidence plan.
- Unit smoke test that keeps source, docs, and CI files present as the repo grows.
- GitHub Actions workflow for configure, build, executable smoke run, and repository validation.

## Evidence Target

Board-specific bring-up, clean driver/application separation, register-level reasoning, and testable hardware abstractions.

## Remote

Intended public repository: https://github.com/rheslar1/digi-imx93-peripheral-driver
