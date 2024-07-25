# About Importunity

Copyright 2024 [NXP](https://www.nxp.com/)

Importunity is a simple Zephyr module that provides integration with [Unity Test](https://github.com/ThrowTheSwitch/Unity) framework.
It differs itself from other similar projects (Such as [Antmicro's great module](https://github.com/antmicro/zephyr-cmock-unity-module)) by not requiring Ruby as it does not make use of any of Unity's optional helper scripts.
No additional dependencies are required to use Importunity.
This makes using Importunity super straightforward and suitable for Unity beginners.

## Usage

To include Importunity in your project your `west.yml` file should contain the following:

```yaml
manifest:
  projects:
    - name: importunity
      url: https://github.com/karolinaas/importunity.git
      path: modules/importunity
      revision: v1.0.0
      import: true
```

Then you simply have to run `west update` in your west workspace and you're ready to start testing.

To create and run a test using Unity you have to create a test [application](https://docs.zephyrproject.org/latest/develop/application/index.html).

Then you can follow the [usual steps to create a Unity test file](https://github.com/ThrowTheSwitch/Unity/blob/master/docs/UnityGettingStartedGuide.md#how-to-create-a-test-file).

To provide your test application with Twister integration you have to include a `testcase.yaml` file in your project.
A simple `testcase.yaml` file could look like this:

```yaml
tests:
  <project_name>.<test_name>:
    tags: <tags>
```

For more information about `testcase.yaml` files and Twister you can refer to [Twister's documentation](https://docs.zephyrproject.org/latest/develop/test/twister.html).

If you need inspiration to create test applications using Importunity module you can refer to Importunity's [basic test](https://github.com/karolinaas/importunity/tree/zephyr/tests/basic).

### Testing Importunity itself

To test itself, Importunity uses [Unity's own self tests](https://github.com/ThrowTheSwitch/Unity/tree/master/test/tests).
Their implementation for Importunity can be found [here](https://github.com/karolinaas/importunity/tree/zephyr/tests/test_unity) in the `tests` directory.
You can run them using Twister.

## General information

The name Importunity was chosen because I was importunate to my coworker about implementing a Zephyr module. Pun intentended. ;)

### Unity version

Importunity is currently using [Unity release v2.6.0](https://github.com/ThrowTheSwitch/Unity/releases/tag/v2.6.0)

### Licensing

Importunity is released under the permissive Apache-2.0 license.