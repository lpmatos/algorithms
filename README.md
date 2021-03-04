<p align="center">
  <img alt="logo" src="https://guiatech.net/wp-content/uploads/2018/01/algoritmos-1.jpg" width="350px" float="center"/>
</p>

<h3 align="center">👨‍💻 Computer Science Algorithms 👨‍💻</h3>

<div align="center">

[![Semantic Release](https://img.shields.io/badge/%20%20%F0%9F%93%A6%F0%9F%9A%80-semantic--release-e10079.svg)](https://github.com/lpmatos/algorithms)
[![Commitizen friendly](https://img.shields.io/badge/commitizen-friendly-brightgreen.svg)](https://github.com/lpmatos/algorithms)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)
[![CI](https://github.com/lpmatos/algorithms/actions/workflows/ci.yml/badge.svg)](https://github.com/lpmatos/algorithms/actions/workflows/ci.yml)
[![Gitpod Ready-to-Code](https://img.shields.io/badge/Gitpod-Ready--to--Code-blue?logo=gitpod)](https://gitpod.io/#https://github.com/lpmatos/algorithms)

</div>

---

<p align="center">
  <img alt="funny-gif" src="https://media3.giphy.com/media/3o6Yg4GUVgIUg3bf7W/giphy.gif" width="450px" float="center"/>
</p>

<p align="center">  
  Theory and implementation of a few algorithms just for fun!
</p>

<p align="center">
  <a href="#about">About</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#getting-started">Getting Started</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#docs">Docs</a>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#author">Author</a>
</p>

## ➤ About <a name = "about"></a>

Practical and theoretical study of some computer science algorithms.

---

## ➤ Getting Started <a name = "getting-started"></a>

If you want to contribute, first you need to do a **git clone** of the repo:

>
> 1. git clone --depth 1 <https://github.com/lpmatos/algorithms.git> -b main
>

This will give you access to the code on your **local machine**.

### Prerequisites

Before you start developing on this project you need to configure some tools on your local machine:

- **npm**
- **gitleaks**
- **dive**
- **docker**
- **docker-compose**

For more information, access the [CONTRIBUTING](CONTRIBUTING.md) file.

### Installing

To install support dependencies that handle commit and release standards, run the command:

```bash
npm install
```

This shareable configuration use the following dependencies:

- [`@semantic-release/git`](https://github.com/semantic-release/git)
- [`@semantic-release/github`](https://github.com/semantic-release/github)
- [`@semantic-release/changelog`](https://github.com/semantic-release/changelog)
- [`@semantic-release/commit-analyzer`](https://github.com/semantic-release/commit-analyzer)
- [`@semantic-release/release-notes-generator`](https://github.com/semantic-release/release-notes-generator)

For more information, access the [CONTRIBUTING](CONTRIBUTING.md) file.

---

## Algorithms

An algorithm is an unambiguous specification of how to solve a class of problems. It is a set of rules that precisely define a sequence of operations.

---

## ➤ Development with Docker


Steps to build the docker image:

<details><summary>🐋 Build</summary>
<p>

Docker commands to build your image:

```bash
docker image build -t <IMAGE_NAME> -f <PATH_DOCKERFILE> <PATH_CONTEXT_DOCKERFILE>
docker image build -t <IMAGE_NAME> . (This context)
```
</p>
</details>

<details><summary>🐋 Run</summary>
<p>

Docker commands to run a container with yout image:

* **Linux** running:

```bash
docker container run -d -p <LOCAL_PORT:CONTAINER_PORT> <IMAGE_NAME> <COMMAND>
docker container run -it --rm --name <CONTAINER_NAME> -p <LOCAL_PORT:CONTAINER_PORT> <IMAGE_NAME> <COMMAND>
```

* **Windows** running:

```bash
winpty docker.exe container run -it --rm <IMAGE_NAME> <COMMAND>
```
</p>
</details>

---

## ➤ Docs <a name = "docs"></a>

- [🗲 Algoritmos de Busca](./docs/Algoritmos-de-Busca.md)
- [🗲 Busca Linear x Busca Binária](./docs/Busca-Linear-x-Busca-Binary.md)
- [🗲 Comparação de Algoritmos](./docs/Comparacao-de-Algoritmos.md)
- [🗲 Dividir para Conquistar](./docs/Dividir-para-Conquistar.md)

---

## ➤ Contributing

Contributions, issues and feature requests are welcome. Feel free to check issues page if you want to contribute. [Check the contributing guide](CONTRIBUTING.md).

---

## ➤ License <a name = "license"></a>

This repository is released under the [MIT license](https://opensource.org/licenses/MIT). In short, this means you are free to use this software in any personal, open-source or commercial projects. Attribution is optional but appreciated.

---

## ➤ Versioning <a name = "versioning"></a>

[**CHANGELOG.md**](CHANGELOG.md)

---

## ➤ Author <a name = "author"></a>

👤 **Lucca Pessoa**

Hey!! If you like this project or if you find some bugs feel free to contact me in my channels:

>
> * Email: luccapsm@gmail.com
> * Website: [lpmatos](https://github.com/lpmatos)
> * Github: [@lpmatos](https://github.com/lpmatos)
> * GitLab: [@lpmatos](https://gitlab.com/lpmatos)
> * LinkedIn: [@luccapessoa](https://www.linkedin.com/in/luccapessoa/)
>

---

## ➤ Troubleshooting <a name = "troubleshooting"></a>

This is just a personal project created for study/demonstration purposes and to simplify my working life, it may or may not be a good fit for your project!

---

## ➤ Show your support <a name = "show-your-support"></a>

Give a ⭐️ if this project helped you!

---

Made with 💜 by [me](https://github.com/lpmatos) :wave: inspired on [readme-md-generator](https://github.com/kefranabg/readme-md-generator)
