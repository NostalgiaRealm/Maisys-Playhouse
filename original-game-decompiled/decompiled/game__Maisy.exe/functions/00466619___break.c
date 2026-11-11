
/* ==== __break @ 00466619 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00466619-00466619
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


