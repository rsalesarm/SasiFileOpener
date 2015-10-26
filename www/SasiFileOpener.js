
module.exports = {
    open: function (url) {
        var success = function () {
            console.log("success!");
        }
        var failure = function (error) {
            console.log(error);
        }
        cordova.exec(success, failure, "SasiFileOpener", "openFile", [url]);
    }
}
