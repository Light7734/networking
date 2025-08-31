---
title: BitBlast | Decrease Your C++ Compilation Times!
---

# Hook <20s
Are you tired of waiting for your project to compile?
Have you ever wished that it could go just a little bit faster?
Does everything takes too long?
In this video I'll show you 13 ways to significantly decrease your compilation times!

We'll start by covering the low-hanging fruits, that is--- very simple changes with considerable results.
Afterwards, we'll go from least to most intrusive code changes for cutting down compilation times.
And we'll wrap up by discussing most cost-effective options in case you wanna blow some money away.

Now, the low-hanging fruits...

## Modern Linker
or Mold Linker

As you can see, mold uses all available cores throughout its execution and finishes quickly. In contrast, lld fails to utilize available cores most of the time. 

On a side-note, this project could you financial support...
The next step is to replace Make with
## Ninja 
no not this guy, but the build tool.

CCache

Upgrade Compilers

Next item is... disabling your
Anti Virus

Ensure Parallel Build

-- Code Changes -- (from least to most intrusive)
Minimize Includes

Forward Declaration

Precompiled Headers

Unity Builds

Modules

-- Shut Up and Take My Money --
Upgrade Hardware

Build Over Network


# Sources

## Repositories
Mold: https://github.com/rui314/mold
Ninja: https://github.com/ninja-build/ninja
Ccache: https://github.com/ccache/ccache

## Benchmarks
Ninja: https://david.rothlis.net/ninja-benchmark/

## Articles / Forums
https://www.reddit.com/r/cpp/comments/hj66pd/c_is_too_slow_to_compile_can_you_share_all_your/
