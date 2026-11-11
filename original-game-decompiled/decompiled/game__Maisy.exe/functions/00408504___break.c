
/* ==== __break @ 00408504 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00408504-00408504
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


