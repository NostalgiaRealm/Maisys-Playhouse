
/* ==== __break @ 0045ef15 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045ef15-0045ef15
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


