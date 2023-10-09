constraint_setting(name = "custom_constraint_setting")

constraint_value(
    name = "v1",
    constraint_setting = ":custom_constraint_setting",
    visibility = ["//visibility:public"],
)

constraint_value(
    name = "v2",
    constraint_setting = ":custom_constraint_setting",
    visibility = ["//visibility:public"],
)

platform(
    name = "linux_x86_v1",
    constraint_values = [
        "@platforms//os:linux",
        "@platforms//cpu:x86_64",
        ":v1",
    ],
    visibility = ["//visibility:public"],
)

platform(
    name = "linux_x86_v2",
    constraint_values = [
        "@platforms//os:linux",
        "@platforms//cpu:x86_64",
        ":v2",
    ],
    visibility = ["//visibility:public"],
)

