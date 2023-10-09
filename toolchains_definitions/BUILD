# Copyright 2016 The Bazel Authors. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This becomes the BUILD file for @local_config_cc// under non-BSD unixes.

load("@local_config_cc//:cc_toolchain_config.bzl", "cc_toolchain_config")

package(default_visibility = ["//visibility:public"])

licenses(["notice"])  # Apache 2.0

cc_library(
    name = "malloc",
)

filegroup(
    name = "empty",
    srcs = [],
)

# filegroup(
#     name = "cc_wrapper",
#     srcs = ["cc_wrapper.sh"],
# )

filegroup(
    name = "compiler_deps",
    srcs = glob(
        ["extra_tools/**"],
        allow_empty = True,
    ) + [":builtin_include_directory_paths"],
)

# This is the entry point for --crosstool_top.  Toolchains are found
# by lopping off the name of --crosstool_top and searching for
# the "${CPU}" entry in the toolchains attribute.
# cc_toolchain_suite(
#     name = "toolchain",
#     toolchains = {
#         "k8|gcc": ":cc-compiler-k8",
#         "k8": ":cc-compiler-k8",
#         "armeabi-v7a|compiler": ":cc-compiler-armeabi-v7a",
#         "armeabi-v7a": ":cc-compiler-armeabi-v7a",
#     },
# )

[ cc_toolchain(
    name = "cc-compiler-k8-{}".format(toolchain_index),
    all_files = ":compiler_deps",
    ar_files = ":compiler_deps",
    as_files = ":compiler_deps",
    compiler_files = ":compiler_deps",
    dwp_files = ":empty",
    linker_files = ":compiler_deps",
    module_map = None,
    objcopy_files = ":empty",
    strip_files = ":empty",
    supports_param_files = 1,
    toolchain_config = ":local_{}".format(toolchain_index),
    toolchain_identifier = "local_{}".format(toolchain_index),
)
  for toolchain_index in [1, 2]
  ]

[
    cc_toolchain_config(
        name = "local_{}".format(toolchain_index),
        abi_libc_version = "local",
        abi_version = "local",
        compile_flags = [
            "-fstack-protector",
            "-Wall",
            "-Wunused-but-set-parameter",
            "-Wno-free-nonheap-object",
            "-fno-omit-frame-pointer",
            "-DTOOLCHAIN=\"local_{}\"".format(toolchain_index),
        ],
        compiler = "gcc",
        coverage_compile_flags = ["--coverage"],
        coverage_link_flags = ["--coverage"],
        cpu = "k8",
        cxx_builtin_include_directories = [
            "/nix/store/qyn4v5nz9fl0163721xc2yp7zqsis66r-gcc-13.2.0/lib/gcc/x86_64-unknown-linux-gnu/13.2.0/include",
            "/nix/store/qyn4v5nz9fl0163721xc2yp7zqsis66r-gcc-13.2.0/include",
            "/nix/store/qyn4v5nz9fl0163721xc2yp7zqsis66r-gcc-13.2.0/lib/gcc/x86_64-unknown-linux-gnu/13.2.0/include-fixed",
            "/nix/store/4lap45ifj50lp980id60fnbvs81yj9lr-glibc-2.37-8-dev/include",
            "/nix/store/qyn4v5nz9fl0163721xc2yp7zqsis66r-gcc-13.2.0/include/c++/13.2.0",
            "/nix/store/qyn4v5nz9fl0163721xc2yp7zqsis66r-gcc-13.2.0/include/c++/13.2.0/x86_64-unknown-linux-gnu",
            "/nix/store/qyn4v5nz9fl0163721xc2yp7zqsis66r-gcc-13.2.0/include/c++/13.2.0/backward",
        ],
        cxx_flags = ["-std=c++0x"],
        dbg_compile_flags = ["-g"],
        host_system_name = "local",
        link_flags = [
            "-fuse-ld=gold",
            "-Wl,-no-as-needed",
            "-Wl,-z,relro,-z,now",
            "-B/home/stan/.nix-profile/bin",
            "-pass-exit-codes",
        ],
        link_libs = [
            "-lstdc++",
            "-lm",
        ],
        opt_compile_flags = [
            "-g0",
            "-O2",
            "-D_FORTIFY_SOURCE=1",
            "-DNDEBUG",
            "-ffunction-sections",
            "-fdata-sections",
        ],
        opt_link_flags = ["-Wl,--gc-sections"],
        supports_start_end_lib = True,
        target_libc = "local",
        target_system_name = "local",
        tool_paths = {
            "ar": "/home/stan/.nix-profile/bin/ar",
            "ld": "/home/stan/.nix-profile/bin/ld",
            "llvm-cov": "None",
            "llvm-profdata": "None",
            "cpp": "/home/stan/.nix-profile/bin/cpp",
            "gcc": "/home/stan/.nix-profile/bin/gcc",
            "dwp": "/home/stan/.nix-profile/bin/dwp",
            "gcov": "None",
            "nm": "/home/stan/.nix-profile/bin/nm",
            "objcopy": "/home/stan/.nix-profile/bin/objcopy",
            "objdump": "/home/stan/.nix-profile/bin/objdump",
            "strip": "/home/stan/.nix-profile/bin/strip",
        },
        toolchain_identifier = "local",
        unfiltered_compile_flags = [
            "-fno-canonical-system-headers",
            "-Wno-builtin-macro-redefined",
            "-D__DATE__=\"redacted\"",
            "-D__TIMESTAMP__=\"redacted\"",
            "-D__TIME__=\"redacted\"",
        ],
    )
    for toolchain_index in [
        1,
        2,
    ]
]
