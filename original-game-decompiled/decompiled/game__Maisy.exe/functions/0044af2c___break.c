
/* ==== __break @ 0044af2c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044af2c-0044af2c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


