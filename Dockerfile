# Use the official Nginx image from Docker Hub as a base image
FROM nginx:latest

# Set the working directory inside the container
WORKDIR /usr/share/nginx/html

# Copy the local 'index.html' file into the container
COPY index.html .

# Expose port 80 to make the container accessible from outside
EXPOSE 80
