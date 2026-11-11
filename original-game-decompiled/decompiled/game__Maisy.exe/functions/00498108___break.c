
/* ==== __break @ 00498108 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00498108-00498108
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


