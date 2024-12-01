# Desktop Biofibers Spinning Machine v1.0.1

![Machine Overview](https://github.com/utilityresearchlab/desktop-biofibers-spinning/blob/main/hardware/images/machine-overview.png)

The Desktop Biofibers Spinning Machine is an open-source, modular machine for producing textile fibers from sustainable bio-based liquid solutions. It enables prototyping new types of sustainable fibers and exploring the design of sustainable smart textiles.

It supports spinning fibers from bio-based solutions, including ones that require heat during the spinning process. 

This repository contains all the design-related details and files to build the machine.

## High-level Specifications
- ~$600 for a machine (and even less if you reuse an old 3D printer like an Ender 3v2!)
- Heated Syringe Wrap
- 60 mL Syringe Volume (using the Open-Source Large Volume Extruder)
- Supports Luer Lock Nozzles/Tips
- Supports Heated Nozzle using a Luer Lock-to-M6 3D printer nozzle adapter
- Modular collector assemblies for applying different coatings to fibers

## Building a Biofibers Machine
![Machine Diagram with Printed Parts in Tan](https://github.com/utilityresearchlab/desktop-biofibers-spinning/blob/main/hardware/images/machine-full-assembly.png)

- [Bill of Materials](https://docs.google.com/spreadsheets/d/1E_2IHzlC_cG40hGRjpHroCwSM1nkIKEBkRHdSb38-pU/edit#gid=0)
- Download the repository
- 3D Print the parts as listed in the BoM. Unless otherwise noted in the BoM Description/Notes, all 3D printed parts should be printed using PLA, 20% infill, 0.2 mm Layer height. The default "quality" setting in Prusa Slicer for the MK3S+/mini+ should be sufficient. The printed parts are shown in the color tan in the diagram above.

- Download the [CAD Assembly for Fusion 360](https://drive.google.com/drive/folders/1Qh19Er5d5Sq22oTk4Mabvu63gKj0vlPQ?usp=sharing) for assembly guidance and connect with us on Discord (see info below)
- Follow the [Electronics Wiring Diagram](https://github.com/utilityresearchlab/desktop-biofibers-spinning/blob/main/hardware/electronics-assembly/biofibers-electronics-wiring-diagram-v1.0.1.jpg)  alongside the [RAMPS 1.4 Schematic](https://osoyoo.com/wp-content/uploads/2016/07/Schematic-1.png)

![Electronics Wiring Diagram for the Biofibers Machine](https://github.com/utilityresearchlab/desktop-biofibers-spinning/blob/main/hardware/electronics-assembly/biofibers-electronics-wiring-diagram-v1.0.1.jpg)

## Using the Machine
- Please see our [research paper](https://utilityresearchlab.org/assets/research/desktop-biofibers-spinning/chi24-desktop-biofibers-spinning.pdf) for more details on the process. 
- It is highly recommended that you use a 3D printer host controller software like [Repetier Host](https://www.repetier.com/download-software/) to communicate with the machine.
- In your host controller software, set the baud rate to `250000`, and connect as you would a typical 3D printer.
- You can use g-code commands to set the temperature of the syringe heater and nozzle, as well as set the collector speed/direction. More details are in the paper linked above.

## Join Our Discord for Assembly Help and Collaborations
We're eager to help and collaborate 😃! If you would like to work with us on the machine, build one yourself, or explore bio-based material solutions for fiber spinning, join our Discord: [https://discord.gg/vDmk3t2FMX](https://discord.gg/vDmk3t2FMX). For all other inquires, please reach out to 
 reach out to [Dr. Michael Rivera](https://mikeriv.com) and the [Utility Research Lab](https://utilityresearchlab.org).
 
## Planned Updates
- Movable Z-Axis
- Software Tool for Machine Control (for now a 3D printer host controller works to send G-code commands)
- Custom Collector Shapes
- Assembly guides

## Machine Design Change Log
- v1.0.1:
    - 2024-11-30:
        - Added Electronics Wiring Diagram
    - 2024-11-07: 
        - Added new collector spindle v2.0.0 design with a key shaft lock
        - Added new LVE Small Gear v2 design
- v1.0.0: Initial design

## Paper Reference 
```
Eldy S. Lazaro Vasquez, Mirela Alistar, Laura Devendorf, and Michael L. Rivera. 2024. Desktop Biofibers Spinning: An Open-Source Machine for Exploring Biobased Fibers and Their Application Towards Sustainable Smart Textile Design. In Proceedings of the CHI Conference on Human Factors in Computing Systems (CHI '24). Association for Computing Machinery, New York, NY, USA, Article 856, 1–18. https://doi.org/10.1145/3613904.3642387
```

## Acknowledgements
This work is partially supported by the National Science Foundation under Grant #1943109, and under Grant #2127309 to the
Computing Research Association for the CIFellows 2021 Project.
We are grateful to Simon Kammler, Daniel Wolters, Maximilian
Mohr, Stefan Peterek, Dr. Kazim Acatay, and research assistants at
the Institut für Textiltechnik (ITA) of RWTH Aachen University for
working with us as we explored fiber wet-spinning in their facilities. We are thankful to Philipp R. Stoessel for explaining his previous work with gelatin fibers wet spinning in very simple words which allowed us to replicate his spinning solution formulation. We would also like to acknowledge the support of Miles Henry Lewis who helped with designing and 3D printing the very first version of this machine.

This machine leverages several open-source projects including the [Marlin 2.1.1 firmware](https://marlinfw.org/) under GPL license, the [Large Volume Extruder](https://3d.nih.gov/entries/3DPX-008366) under CC-BY-SA 4.0, and the [Ender 3 V2 X axis belt tensioner replacement](https://www.printables.com/model/309148-ender-3-v2-x-axis-belt-tensioner-replacement) under CC-BY-NC-SA 4.0. The associated licenses can be found in the relevant folders of this repository.
##
 
