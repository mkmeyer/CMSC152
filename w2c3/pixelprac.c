typedef struct {
	unsigned int red;
	unsigned int green;
	unsigned int blue;
} pixel;


pixel** make_and_init_image(int height, int width, pixel color) {
    pixel** newPixel = (pixel **)malloc(height * width * sizeof(pixel));
    for (int i=0; i<height; i++) {
       newPixel[i] = (pixel*) malloc(width*sizeof(pixel*));
    }
    for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){
            newPixel[i][j] = color;
        }
    }
    return (newPixel);
}

void printPixel(pixel** newPixel, int height, int width) {
    pixel color;
    color.red = 15;
    color.green = 10;
    color.blue = 5;
    pixel pixel1;
    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < width; j++) {
            pixel1 = newPixel[i][j];
            printf("red: %d green: %d blue: %d \n", pixel1.red, pixel1.green, pixel1.blue);
        }
        printf("\n");
    }
}

int main () {
    pixel color;
    color.red = 15;
    color.green = 10;
    color.blue = 5;

    pixel** newPixel = make_and_init_image(10, 10, color);

    printPixel(newPixel, 10, 10);

    free(newPixel);

    return 0;
}