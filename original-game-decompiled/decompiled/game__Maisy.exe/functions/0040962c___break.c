
/* ==== __break @ 0040962c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040962c-0040962c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


