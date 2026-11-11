
/* ==== __break @ 00419038 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00419038-00419038
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


