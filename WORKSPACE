register_toolchains(
    "//toolchains_declarations:toolchain_1",
    "//toolchains_declarations:toolchain_2",
)

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "aspect_bazel_lib",
    sha256 = "39ecbb25198950bab1cddc0f36e271f95a3e8bdb102c70e5c3ca6beb48602799",
    strip_prefix = "bazel-lib-2.0.0-beta0",
    url = "https://github.com/aspect-build/bazel-lib/releases/download/v2.0.0-beta0/bazel-lib-v2.0.0-beta0.tar.gz",
)

load("@aspect_bazel_lib//lib:repositories.bzl", "aspect_bazel_lib_dependencies")

aspect_bazel_lib_dependencies()

