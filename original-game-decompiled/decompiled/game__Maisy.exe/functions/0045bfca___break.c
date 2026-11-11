
/* ==== __break @ 0045bfca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bfca-0045bfca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


