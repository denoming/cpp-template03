# Template03

## Name

Multi component binary application

## Description

Executable program consist of multiple components.
Each component is a library whatever consumed by main program and bring additional functional.

The template project provides an example where dedicated complex test fixture is present.
This fixture is split up into three parts:
* Set-up fixture tests
* Fixture tests
* Clean-up fixture tests

The set-up fixture tests are responsible for satisfying required preconditions and is performed before fixtures tests.
The clean-up fixture tests are responsible for cleaning an environment after fixture tests was performed.
The running sequence is completely responsibility of `ctest` and overall doesn't require additional efforts except
applying particular configuration.
