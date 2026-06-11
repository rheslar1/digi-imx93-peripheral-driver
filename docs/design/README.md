# Digi ConnectCore i.MX93 Peripheral Driver Design Package

## Purpose

Hardware peripheral driver for the Digi ConnectCore i.MX93 EVK, covering an on-chip SPI or PWM block, application layer, and test boundary.

This package defines the project as an implementation-ready embedded system. It covers system architecture, requirements, interface boundaries, runtime design, validation evidence, and phased delivery.

## Project Profile

| Field | Value |
| --- | --- |
| Repository | `rheslar1/digi-imx93-peripheral-driver` |
| Primary stack | C++17, C++ Design Patterns, SOLID, i.MX93, Digi ConnectCore, SPI/PWM, Device tree, Linux driver, Unit tests |
| Review proof point | Board-specific bring-up, clean driver/application separation, register-level reasoning, and testable hardware abstractions. |

## Artifacts

- [System Design](system-design.md)
- [Requirements](requirements.md)
- [Interface Control](interface-control.md)
- [Runtime Design](runtime-design.md)
- [Validation Plan](validation-plan.md)
- [Implementation Roadmap](implementation-roadmap.md)
- [Draw.io UML](diagrams/system-design.drawio)
- [PNG UML](diagrams/system-design.png)
