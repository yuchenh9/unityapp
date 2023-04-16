mergeInto(LibraryManager.library, {
  myFunction: function (functionCode, data) {
    try{
      window.dispatchReactUnityEvent("myFunction", UTF8ToString(functionCode), data);
    } catch (e) {
      console.warn("Failed to dispatch event");
    }
  },
});