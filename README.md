# Transitions example

This repository demonstrates the toolchain resolution mechanism as well as the use of platform transitions, to build a target in multiple configurations in one Bazel command.

- The `--incompatible_enable_cc_toolchain_resolution` flag is necessary to use this feature (it is added in the `.bazelrc` file).
- The [toolchains_definitions](toolchains_definitions) folder defines the toolchains. It is not the focus of the repository and contains absolute paths that will have to be modified if you want to run the examples (See [README.md](toolchains_definitions/README.md)).
- The [platforms](platforms) folder defines the platforms.
- The [toolchains_declarations](toolchains_declarations/BUILD) package declares which toolchain is compatible with which platform.
- The [WORKSPACE](WORKSPACE) file `registers` these toolchains with the `register_toolchains` function, so that they are taken into account during toolchain resolution.
- The [BUILD](BUILD) file makes use of the
[platform_transition_binary](https://docs.aspect.build/rules/aspect_bazel_lib/docs/transitions/#platform_transition_binary) rule to transition to different platforms in the same Bazel build (see also [platform_transition_filegroup](https://docs.aspect.build/rules/aspect_bazel_lib/docs/transitions/#platform_transition_filegroup)).

## Demo
The `:main_linux_x86_v1` and `:main_linux_x86_v2` targets are based on the same `//src:main` target built in two different configurations, and thus with different toolchains.

```
$ bazel run :main_linux_x86_v1
```
outputs:

> toolchain = local_1

while

```
bazel run :main_linux_x86_v2
```
outputs:
> toolchain = local_2


