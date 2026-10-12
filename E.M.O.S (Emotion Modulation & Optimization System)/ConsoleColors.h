#pragma once

// These strings tell console which text color to use.
// Print Normal after colored text to return to the default color.
namespace ConsoleColors {
    static const char* Normal = "\033[0m";   // Default color
    static const char* Accent = "\033[36m";  // Cyan, for titles and headings
    static const char* Success = "\033[32m"; // Green, for successful results
    static const char* Warning = "\033[33m"; // Yellow, for stable status
    static const char* Error = "\033[31m";   // Red, for errors or failures
}