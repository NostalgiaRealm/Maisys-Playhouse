
/* ==== __break @ 00498632 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00498632-00498632
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


