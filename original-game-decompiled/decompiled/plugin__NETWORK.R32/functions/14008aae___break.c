
/* ==== __break @ 14008aae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14008aae-14008aae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


