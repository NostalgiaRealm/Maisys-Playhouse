
/* ==== __break @ 00436619 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436619-00436619
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


