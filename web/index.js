// script.js
document.addEventListener('DOMContentLoaded', function() {
    const galleryImages = document.querySelectorAll('.gallery img');

    galleryImages.forEach(image => {
        image.addEventListener('click', () => {
            if (image.classList.contains('zoomed')) {
                // Toggle 'zoomed' class on click
                image.classList.toggle('zoomed');
            } else {
                // Remove 'zoomed' class from all images
                galleryImages.forEach(img => img.classList.remove('zoomed'));
                
                // Add the 'zoomed' class to the clicked image
                image.classList.add('zoomed');
            }
        });
    });
});
