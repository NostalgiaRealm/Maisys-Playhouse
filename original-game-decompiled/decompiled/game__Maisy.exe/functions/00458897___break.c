
/* ==== __break @ 00458897 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00458897-00458897
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


