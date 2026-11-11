
/* ==== __break @ 004a0eba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a0eba-004a0eba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


