
/* ==== __break @ 00498556 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00498556-00498556
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


