
/* ==== __break @ 00413fb5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00413fb5-00413fb5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


