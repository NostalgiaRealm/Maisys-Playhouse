
/* ==== __break @ 00458892 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00458892-00458892
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


