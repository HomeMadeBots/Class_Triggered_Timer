# Timers

This repository defines a package gathering software elements allowing to measure a defined elapsed
time and to send an event on time-up.

The package is designed following
[this meta-model](https://github.com/HomeMadeBots/Embedded_Software_Meta_Model) and implemented
according to [these C language
patterns](https://github.com/HomeMadeBots/C-language-patterns-for-Embedded-Software-Meta-Model).

## Content

The Timers package gathers :
* Events :
  * Time_Is_Up
* Internal_Design_Class :
  * Triggered_Timer

## Overview

![Overview](http://www.plantuml.com/plantuml/proxy?cache=no&src=https://raw.github.com/HomeMadeBots/Timers/master/doc/overview.puml)

## Dependencies

None.

## Use

### With the Arduino IDE

This repository shall be clone within the _libraries_ folder of the _Arduino sketchbook folder_.

## Example

![Triggered_Timer sequence example](http://www.plantuml.com/plantuml/proxy?src=https://raw.github.com/HomeMadeBots/Timers/master/doc/SD_Triggered_Timer.puml)