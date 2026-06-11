# Digi ConnectCore i.MX93 Peripheral Driver Design Package

## Purpose

Hardware peripheral driver for the Digi ConnectCore i.MX93 EVK, covering an on-chip SPI or PWM block, application layer, and test boundary.

This design package turns the project concept into an implementation-ready engineering plan. It defines system boundaries, runtime responsibilities, interface contracts, validation evidence, and the staged path from host simulation to target hardware.

## Project Profile

| Field | Value |
| --- | --- |
| Portfolio category | Senior repo example |
| Repository | `rheslar1/digi-imx93-peripheral-driver` |
| Primary stack | C++17, C++ Design Patterns, SOLID, i.MX93, Digi ConnectCore, SPI/PWM, Device tree, Linux driver, Unit tests |
| Review proof point | Board-specific bring-up, clean driver/application separation, register-level reasoning, and testable hardware abstractions. |

## Package Contents

| Document | Description |
| --- | --- |
| [System Design](system-design.md) | Architecture, runtime flow, state model, component responsibilities, and failure model. |
| [Requirements](requirements.md) | Functional, non-functional, safety, security, and traceability requirements. |
| [Interface Control](interface-control.md) | Hardware/software boundaries, adapter contracts, data contracts, and integration surfaces. |
| [Runtime Design](runtime-design.md) | C++17/SOLID module design, control loop, data processing, persistence or telemetry flow. |
| [Validation Plan](validation-plan.md) | Host, target, CI, hardware, security, and production validation strategy. |
| [Implementation Roadmap](implementation-roadmap.md) | Phased plan for building, testing, and hardening the project. |
| [System UML Draw.io](diagrams/system-design.drawio) | Editable diagram source. |
| [System UML PNG](diagrams/system-design.png) | Rendered diagram for quick review. |

## Design Principles

- Use C++17 value types for deterministic data contracts.
- Keep target-specific APIs behind narrow adapter interfaces.
- Apply SOLID boundaries so runtime orchestration does not depend directly on hardware drivers, transport libraries, or persistence details.
- Keep host-buildable tests aligned with target behavior through scripted adapters.
- Treat diagnostics, failure modes, and validation evidence as first-class deliverables.
