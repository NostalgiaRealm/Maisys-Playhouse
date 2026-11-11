
/* ==== __break @ 0044997a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044997a-0044997a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


