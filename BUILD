load("@aspect_bazel_lib//lib:transitions.bzl",
     "platform_transition_binary"
     )

platform_transition_binary(
    name = "main_linux_x86_v2",
    binary = "//src:main",
    target_platform = "//platforms:linux_x86_v2",
)

platform_transition_binary(
    name = "main_linux_x86_v1",
    binary = "//src:main",
    target_platform = "//platforms:linux_x86_v1",
)
