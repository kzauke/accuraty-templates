# Sass

Sass is a popular language that extends CSS with syntax advancements and features like variables, nesting, math operations, and more. Learn about the basics [here](http://sass-lang.com/guide).

There are two Sass syntaxes available: SCSS (Sassy CSS), which uses the `.scss` extension, and SASS, which uses `.sass` as its extension. The default syntax in this template is SCSS, as it is closer to the existing CSS syntax — using brackets and semicolons, for example. Learn more about the difference [here](http://thesassway.com/editorial/sass-vs-scss-which-syntax-is-better).

The `sass/` folder includes the **main file** and sets of **partials** that are separated into a system of folders. (More information about this folder architecture below.)

## Main file

The main file (`main.scss`) does not begin with an underscore. This file should not contain anything but `@import` directives and comments.

*Note: Before the code is deployed to the server, this file is compiled into the CSS file that is used for this project's skin.*

### Import

Unlike the `@import` directive in CSS, which creates an HTTP request for each use, the Sass statement does not impact performance.

## Partials

These are partial Sass files that contain snippets of code that are imported into the main file. This is a good way to modularize CSS in order to write code that adheres to the [DRY](https://en.wikipedia.org/wiki/Don't_repeat_yourself) principle and is easier to maintain in the long run.

Partials are named with a preceding underscore, which lets Sass know that the file is a partial and should not be generated into a CSS file. For example: `_partial.scss`.

## Folder architecture

Our pattern is to split the codebase into partials that are organized into meaningful, separated folders so you can easily find what you need. The main Sass file imports all partials according to the folder they live in, one after the other in the following order:

1. `abstracts/`
2. `vendors/`
3. `base/`
4. `layout/`
5. `components/`
6. `pages/`

To preserve readability in `main.scss`, the contents of each folder is grouped into one import statement, with a linebreak and each file on its own line. File extensions and leading underscores are not necessary and are therefore omitted.

*Note: If you add any partials to a folder, you will need to add it to the import statement in this file.*
