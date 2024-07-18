if (CONFIG_UNITY_TEST)
    zephyr_include_directories(unity)
    zephyr_library_sources(unity/unity.c)
endif()