
/* ==== __break @ 00449965 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00449965-00449965
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


