# Tigestion

## License

GNU General Public License

## Usage

This app is used to extract tile sets from game maps. The map must be perfectly aligned with the top-left corner of the image; no margins. Additional space to the right or bottom will be ignored, but big enough space to fit tiles into will be analyzed.

Tigestion works by picking a tile of the specified size and comparing it to every other tile to find each unique one, then adding the unique tiles to an output image.

## Notes

This is currently just a CLI app, but a GUI should be made later.