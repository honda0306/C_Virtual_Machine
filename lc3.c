

/* REGISTERS */
/* R_R0 - R_R7 = General purpose */
/* R_PC = Program counter ||| R_COND = Condition flags */
enum
{
    R_R0 = 0,
    R_R1,
    R_R2,
    R_R3,
    R_R4,
    R_R5,
    R_R6,
    R_R7,
    R_PC,
    R_COND,
    R_COUNT
};

/* Opcodes */
enum
{
    OP_BR = 0, /* branch */
    OP_ADD, /* add */
    OP_LD, /* load */
    OP_ST, /* store */
    OP_JSR, /* jump register */
    OP_AND, /* bitwise and */
    OP_LDR, /* load register */
    OP_STR, /* store register */
    OP_RTI, /* unused */
    OP_NOT, /* bitwise not */
    OP_LDI, /* load indirect */
    OP_STI, /* store indirect */
    OP_JMP, /* jummp */
    OP_RES, /* reserved (unused) */
    OP_LEA, /* load effective address */
    OP_TRAP /* execute trap */
};

/* Memory Storage - 65536 bits */
uint16_t memory[UINT16_MAX];

/* Register Storage */
uint16_t reg[R_COUNT];