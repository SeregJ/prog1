#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void sugokiir() {
    printf("alap v0.2\n\n");
    printf("Usage: alap <template_id> [option]\n\n");
    printf("Available options:\n\n");
    printf("-h        - show this help\n");
    printf("-v        - version info\n");
    printf("--stdout  - don't create source file, print result to stdout\n\n");
    printf("Available templates:\n\n");
    printf("* c       - C source code [main.c]\n");
    printf("* java    - Java source code [Main.java]\n");
    printf("* py      - Python 3 source code [main.py]\n");
    printf("* sh      - Bash source code [main.sh]\n");
}

void sablon(const char* nyelv, bool kellstdout) {
    const char* fajlnev = "";
    const char* kod = "";
    if (strcmp(nyelv, "c") == 0) {
        fajlnev = "main.c";
        kod = "#include<stdio.h>\n"
              "\n"
              "int main() {\n"
              "    printf(\"hello\\n\");\n"
              "\n"
              "    return 0;\n"
              "}\n";
    } else if (strcmp(nyelv, "java") == 0) {
        fajlnev = "Main.java";
        kod = "public class Main {\n"
              "    public static void main(String[] args) {\n"
              "        System.out.println(\"hello\");\n"
              "    }\n"
              "}\n";
    } else if (strcmp(nyelv, "py") == 0) {
        fajlnev = "main.py";
        kod = "print(\"hello\")\n";
    } else if (strcmp(nyelv, "sh") == 0) {
        fajlnev = "main.sh";
        kod = "#!/bin/bash\n"
              "\n"
              "echo \"hello\"\n";
    } else {
        printf("Error: Unknown template '%s'. Run 'alap -h' for available templates.\n", nyelv);
        return;
    }
    if (kellstdout) {
        printf("%s", kod);
        return;
    }
    FILE *ellenorzofajl = fopen(fajlnev, "r");
    if (ellenorzofajl != NULL) {
        fclose(ellenorzofajl);
        printf("Error: the file '%s' already exists\n", fajlnev);
        return;
    }
    FILE *fajl = fopen(fajlnev, "w");
    fprintf(fajl, "%s", kod);
    fclose(fajl);
    printf("# `%s` was created\n", fajlnev);
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        sugokiir();
        return 0;
    }
    const char* sablonid = NULL;
    bool kellstdout = false;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0) {
            sugokiir();
            return 0;
        } else if (strcmp(argv[i], "-v") == 0) {
            printf("alap v0.2\n");
            return 0;
        } else if (strcmp(argv[i], "--stdout") == 0) {
            kellstdout = true;
        } else {
            if (sablonid == NULL) {
                sablonid = argv[i];
            }
        }
    }
    if (sablonid != NULL) {
        sablon(sablonid, kellstdout);
    } else if (!kellstdout) {
        sugokiir();
    }
    return 0;
}