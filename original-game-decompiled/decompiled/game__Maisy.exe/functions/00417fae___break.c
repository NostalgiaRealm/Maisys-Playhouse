
/* ==== __break @ 00417fae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417fae-00417fae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


