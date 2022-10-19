workspace "Uni Login App"
	startproject "UniLoginApp"

	targetdir "../Build/bin/%{prj.name}/%{cfg.buildcfg}/%{cfg.platform}/"
	objdir "../Build/obj/%{prj.name}/%{cfg.buildcfg}/%{cfg.platform}/"
	buildlog "../Build/obj/%{prj.name}/%{cfg.platform}/%{cfg.buildcfg}/%{prj.name}.log"

	largeaddressaware "on"
	editandcontinue "off"
	staticruntime "on"

	systemversion "latest"
	characterset "unicode"
	warnings "extra"

	flags {
		"shadowedvariables",
		"multiprocessorcompile",
		"undefinedidentifiers",
	}

	platforms {
		"Win-x86",
		"Win-x64",
	}

	configurations {
		"Release",
		"Debug",
	}

	--x86
	filter "platforms:Win-x86"
		architecture "x86"
	--end

	--x64
	filter "platforms:Win-x64"
		architecture "x86_64"
	--end

	filter "Release"
		defines "NDEBUG"
		optimize "full"
		runtime "release"
		symbols "off"

	filter "Debug"
		defines "DEBUG"
		optimize "debug"
		runtime "debug"
		symbols "on"

	project "University Login App"
		targetname "University Login App"
		language "c++"
		cppdialect "c++17"
		warnings "off"

		kind "consoleapp"

		filter "platforms:Win-x86"
			--[[syslibdirs {
				"./deps/SDL2/lib/x86/",
			}--]]
		filter "platforms:Win-x64"
			--[[syslibdirs {
				"./deps/SDL2/lib/x64/",
			}--]]
		filter {}

		--[[links {
			"SDL2",
			"SDL2main",
			"opengl32",
		}--]]

		includedirs {
			"./src/",

			--./deps/SDL2/include/",
		}

		files {
			"./src/**",
		}
		
		vpaths {
   			["Header Files"] = "**.h",
   			["Source Files"] = "**.cpp",
   			["Documentation"] = "**.txt",
		}   