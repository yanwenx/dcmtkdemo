# dcmtkdemo
Dicom demo using DCMTK library.

## Build and Install DCMTK Library
DCMTK is a collection of libraries and applications implementing large parts the DICOM standard. The latest version of DCMTK is 3.6.6 (2021-02-23).

### Download the Source Code and Support Libraries
We can download the library source code or binaries as well as the support libraries on https://dicom.offis.de/dcmtk.php.en. Since we are going to build and install the library with CMake and Visual Studio on Windows 10, we will download and unzip the source code package [dcmtk-3.6.6.zip](https://dicom.offis.de/download/dcmtk/dcmtk366/dcmtk-3.6.6.zip) and the support libraries package [dcmtk-3.6.6-win64-support-MD-iconv-msvc-15.8.zip](https://dicom.offis.de/download/dcmtk/dcmtk366/support/dcmtk-3.6.6-win64-support-MD-iconv-msvc-15.8.zip).

### Generate Visual Studio Solution for DCMTK
#### 1. Open CMake GUI, specify the source code path and the path where to build the binaries (creating an empty folder for the binaries will be preferable). Then click Configure on the bottom left corner.
![1](https://user-images.githubusercontent.com/32472429/108937715-a202bd00-7603-11eb-9da3-c974f82adf33.png)

#### 2. Specify the generator and platform for the project. Since we are building the library on x64 platform using Visual Studio 2019, select Visual Studio 16 2019 generator and x64 platform. Then click Finish, CMake will start configuring the project.
![2](https://user-images.githubusercontent.com/32472429/108937960-163d6080-7604-11eb-9d53-cd7703ee220a.png)

#### 3. The configuration will take a while. Once it completes, CMake will least the build options for the project. We need to make some changes to the options, as listed below.
![3](https://user-images.githubusercontent.com/32472429/108939346-66b5bd80-7606-11eb-85ff-7000064e7aa9.png)
![4](https://user-images.githubusercontent.com/32472429/108939595-d1ff8f80-7606-11eb-9d91-86797918466c.png)
![5](https://user-images.githubusercontent.com/32472429/108939783-19861b80-7607-11eb-8e3a-ae6574d74a5a.png)
![6](https://user-images.githubusercontent.com/32472429/108940169-bb0d6d00-7607-11eb-84fd-4fc522152304.png)

#### 4. Hit Configure again. If no error occurs, hit generate. If no error again, the Visual Studio Solution will be generated to the binaries output path.

#### 5. Open the VS solution under administrator mode. Click Build -> Batch Build..., the Batch Build window will show up. Select (only) ALL_BUILD, then click Build.
![7](https://user-images.githubusercontent.com/32472429/108941347-cbbee280-7609-11eb-9bf0-16b2aa62047a.png)

#### 6. If no error occurs, click Build -> Batch Build... again. Now select INSTALL (in addition to ALL_BUILD), then click Build again.
![8](https://user-images.githubusercontent.com/32472429/108941234-92867280-7609-11eb-9fa7-f09e377252da.png)

#### 7. If no error occurs, the library will be built in the path specified in the CMake list (in step 3).
