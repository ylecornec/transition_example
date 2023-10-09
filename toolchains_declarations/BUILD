toolchain(
    name = "toolchain_1",
    exec_compatible_with = [
        "@platforms//os:linux",
        "@platforms//cpu:x86_64",
    ],
    target_compatible_with = [
        "@platforms//os:linux",
        "@platforms//cpu:x86_64",
        "//platforms:v1",
    ],
    toolchain = "//toolchains_definitions:cc-compiler-k8-1",
    toolchain_type = "@rules_cc//cc:toolchain_type",
)

toolchain(
    name = "toolchain_2",
    exec_compatible_with = [
        "@platforms//os:linux",
        "@platforms//cpu:x86_64",
    ],
    target_compatible_with = [
        "@platforms//os:linux",
        "@platforms//cpu:x86_64",
        "//platforms:v2",
    ],
    toolchain = "//toolchains_definitions:cc-compiler-k8-2",
    toolchain_type = "@rules_cc//cc:toolchain_type",
)
