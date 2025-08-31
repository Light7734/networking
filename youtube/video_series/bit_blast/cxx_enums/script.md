---
title: BitBlast | The Cooked State of Enums
---

# Hook <20s
"There should be one, and preferably only one, obvious way to do it." --- The Zen of Python
A principle which C++ defies in many fronts, enums being one of them, 
assuming you know the basics, let's learn more about enums!

# Ways to declare enums
There are mainly 3 ways we could declare one.

1: The classic -- unscoped enum
-> Which allows implicit conversion to integer types
-> And pollutes the enclosing namespace
-> Pretty dangerous

2: The modern -- scoped enum, using the `class` (or `struct`) keywrod
-> Which prohibits implicit conversions (even to the direct underlying type)
-> And requires proper qualification when accessing its elements

3: The anonymous enum
-> Much like the classic enum, but without a qualifier
-> It was used as a way of storing constants
-> But there's also a neat trick you could do with anonymous or unscoped enums, and that is to put it inside a namespace and have the middle-ground of scoped and unscoped enums
    -> It allows implicit conversion to integer types.
    -> But, it still requires proper qualification when accessing its elements. And won't pollute the enclosing namespace.

# Which is the way?
But what's the right way?
That depends on how you wanna shoot yourself in the foot.

1- Use the classic one when writing C or your C++ is too old.
2- Use the namespace trick when you can't be arsed to explicitly convert.
3- And prefer the scoped enum in literary all the other cases.

Now, let's get to some tips and tricks...
# Tips & Tricks
1: Prefer Scoped Enums.
Explicit is safer than implicit

2: Specify the Underlying Type
Like this! always do this, even if the type is int--- It serves as documentation and explicitly states your intent.

3: Avoid the "default" Case 
This may be too much in certain cases, but try to develop a preference for explicitly handling all enums values.
Even if multiple values execute the same code, you could fall-through them if you don't put breaks in-between.
You could enable warnings as errors for catching incomplete statements.
So when you inevitably add new values to your enums, the compiler will have your back.

4: Utilize Zero
Since zero evaluates to false, and other values to true, you could treat it as a special value for making a binary decision.
For example, in Vulkan API, the VkResult has 0 for success, and errors are set to non-zero values.
This makes the decision to handle-error or move-on a binary decision like this.

5: Utilize Its Counting Nature
The values are implicitly incremented, this means you could have a "count" element at the end like so.

6: Using enum
Remember how namespaced anonymous or unscoped enums enforced explicit qualification, yet allowed implicit conversion?
We could have it the other way around with the using enum syntax.
This way explicit qualification is not required, but implicit conversion is still prohibited.

7: (Are you using it as a) Bitfield? (Then consider) Overload(ing) the Bitwise Operators.

8: Std Utilities
And to wrap it up.. here are some enum utilities from the standard library...

Now, the best way to learn is to experiment, 
You can find compiler explorer links for all the code you've seen in this video in the description.

If you want more of this type of content in your homepage, consider subscribing. Chao! ^~^

