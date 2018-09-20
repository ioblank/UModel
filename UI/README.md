Simple UI Library
=================

Summary
-------

This is a small UI library. It was designed to create user interfaces without any use of "mouse work".
Everything is created with use of simple declarative syntax looking like this:

	NewControl(UIGroup)
	.Expose(GroupVar)
	.SomeGroupFunc()
	[
		NewControl(ControlType1, args1)
		.SomeControl1Func1()
		.SomeControl1Func2()
		+ NewControl(ControlType2, args2)
		.Expose(Control2Var)
		...
	]

Source code is [located on Github](https://github.com/gildor2/UModel/tree/master/UI).

Supported platforms
-------------------

At the moment this library supports only Windows platform, however it was designed in mind to make it cross-platform later.

STL support
-----------

The library was created specially for [UModel project](http://www.gildor.org/en/projects/umodel). Therefore it uses UModel internal structures
to hold information, in particular - TArray and FString (these classes are inspired by Unreal engine API). To make library usable in other
projects, we have created a special wrappers which could be found in [stl-stub](stl-stub) directory. Simply copy them to the main UI library
folder, or set up compiler include paths to use these directories.

Callback / delegate class
-------------------------

This library shipped with [Callback class](callback.h) used for binding any function, class method or labmda as an action to UI event. This
class is self-containing, doesn't depend on other UI library parts, on any other C++ library and/or STL. It could be used separately from UI
library if you need the functionality it provides. The Callback class has been made with use of modern C++, so you will need C++11 supporting
compiler. For more details please refer to [class' source code](callback.h) (read comments in file header).

Sample code
-----------

At the moment it could be located here - [UITest](../Tools/UITest).

Other external files
--------------------
- [Win32Types.h](../Core/Win32Types.h) Contains declarations stripped from Windows.h. Allows faster compilation of headers without use of heavy
  Windows headers. Library's cpp files still depends on Windows SDK.

License
-------

This library is licensed under the [BSD license](LICENSE.txt).
