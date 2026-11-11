
/* ==== __break @ 00423827 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00423827-00423827
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


