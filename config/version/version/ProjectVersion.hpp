#pragma once

#include <string_view>

std::string_view
getProjectVersion();

unsigned
getProjectVersionMajor();

unsigned
getProjectVersionMinor();

unsigned
getProjectVersionPatch();

unsigned
getProjectVersionTweak();

std::string_view
getProjectGitHash();