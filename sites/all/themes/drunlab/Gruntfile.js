module.exports = function(grunt) {

  // Project configuration.
  grunt.initConfig({
    pkg: grunt.file.readJSON("package.json"),
    less: {
      development: {
        options: {
          sourceMap: true,
          sourceMapFilename: "style.css.map"
        },
        files: {
          "style.css": "less/main.less"
        }
      }
    },
    watch: {
      files: 'less/**/*',
      tasks: [
        "less",
      ],
    }
  });

  grunt.loadNpmTasks("grunt-contrib-less");
  grunt.loadNpmTasks("grunt-contrib-watch");
};
